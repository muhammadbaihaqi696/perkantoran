-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 09, 2024 at 01:14 PM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `muhammadbaihaqi_2210010382_4f`
--

-- --------------------------------------------------------

--
-- Table structure for table `laporan_surat_keluar`
--

CREATE TABLE `laporan_surat_keluar` (
  `no_surat_keluar` int(30) NOT NULL,
  `no_agenda` int(5) NOT NULL,
  `tgl_surat` date NOT NULL,
  `asal_surat` varchar(30) NOT NULL,
  `tujuan` varchar(30) NOT NULL,
  `perihal` varchar(50) NOT NULL,
  `sifat` varchar(15) NOT NULL,
  `hub_surat` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `laporan_surat_masuk`
--

CREATE TABLE `laporan_surat_masuk` (
  `no_surat_masuk` int(30) NOT NULL,
  `no_agenda` int(5) NOT NULL,
  `tgl_surat` date NOT NULL,
  `tgl_terima` date NOT NULL,
  `asal_surat` varchar(30) NOT NULL,
  `tujuan` varchar(30) NOT NULL,
  `perihal` varchar(50) NOT NULL,
  `sifat_surat` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE `login` (
  `id_petugas` int(4) NOT NULL,
  `nama_petugas` varchar(30) NOT NULL,
  `password` varchar(8) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `surat_keluar`
--

CREATE TABLE `surat_keluar` (
  `no_surat_keluar` int(30) NOT NULL,
  `no_agenda` int(5) NOT NULL,
  `tgl_surat` date NOT NULL,
  `asal_surat` varchar(30) NOT NULL,
  `tujuan` varchar(30) NOT NULL,
  `perihal` varchar(50) NOT NULL,
  `sifat_surat` varchar(15) NOT NULL,
  `hub_surat` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `surat_keluar`
--

INSERT INTO `surat_keluar` (`no_surat_keluar`, `no_agenda`, `tgl_surat`, `asal_surat`, `tujuan`, `perihal`, `sifat_surat`, `hub_surat`) VALUES
(6, 19391, '2024-09-01', 'Direktur', 'Manager Pemasaran', 'Laporan Bulanan', 'Penting', '33/XII/2023');

-- --------------------------------------------------------

--
-- Table structure for table `surat_masuk`
--

CREATE TABLE `surat_masuk` (
  `no_surat_masuk` int(30) NOT NULL,
  `no_agenda` int(11) NOT NULL,
  `tgl_surat` date NOT NULL,
  `tgl_terima` date NOT NULL,
  `asal_surat` varchar(35) NOT NULL,
  `tujuan` varchar(35) NOT NULL,
  `perihal` varchar(50) NOT NULL,
  `sifat_surat` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `surat_masuk`
--

INSERT INTO `surat_masuk` (`no_surat_masuk`, `no_agenda`, `tgl_surat`, `tgl_terima`, `asal_surat`, `tujuan`, `perihal`, `sifat_surat`) VALUES
(293, 21714, '2024-03-19', '0000-00-00', 'PT. Jaya Nusantara', 'PT.Prima Nusantara', 'Konfimasi Barang Yang Dipesan Belum Diterima', 'Penting');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `login`
--
ALTER TABLE `login`
  ADD PRIMARY KEY (`id_petugas`);

--
-- Indexes for table `surat_keluar`
--
ALTER TABLE `surat_keluar`
  ADD PRIMARY KEY (`no_surat_keluar`);

--
-- Indexes for table `surat_masuk`
--
ALTER TABLE `surat_masuk`
  ADD PRIMARY KEY (`no_surat_masuk`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
