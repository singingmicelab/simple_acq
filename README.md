# simple_acq
simple example of synchronized audio and video acquisition

## Introduction

This repository contains a minimal codebase for acquiring synchronized audio and video. The audio is acquired by Avisoft 116H, and the video is aquired by FLIR Blackfly S and encoded by ffmpeg. The video and audio are synchronized by a start trigger from an Arduino. We use Bonsai as the glue combining all these processes.

The video acquisition is based on:
<https://github.com/ThomasAkam/Point_Grey_Bonsai_multi_camera_acquisition>

## Installation

1. set up new conda environment \
`conda create --prefix ~/.conda/envs/acq python=3.9 ffmpeg`

2. activate conda environment \
`conda activate acq`

3. install package \
`pip install numpy scipy matplotlib jupyterlab`

