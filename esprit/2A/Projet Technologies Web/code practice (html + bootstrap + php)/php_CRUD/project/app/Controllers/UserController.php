<?php

include "../../conf/connect.php";

class UserController
{
  public function getUser()
  {
    $sql = "SELECT * From clients";
    $conn = config::getConnection();

    try {
      $list = $conn->query($sql);
      return $list;
    } catch (Exception $e) {
      die('Error: ' . $e->getMessage());
    }
  }

  public function addUser($user)
  {
    $sql = "INSERT INTO clients(email,password) VALUES (:email,:password)";
    $conn = config::getConnection();

    try {
      $query = $conn->prepare($sql);
      $query->execute([
        'email' => $user->getEmail(),
        'pwd' => $user->getPwd(),
      ]);
      echo "user inserted succcefully";
    } catch (Exception $e) {
      die('Erreur: ' . $e->getMessage());
    }
  }
}