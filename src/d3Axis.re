/*
 * d3-axis
 * https://github.com/d3/d3-axis#api-reference
 */

type axisT;

/* TODO: these are stubs for now, need to implement d3-scale first */
external axisTop : D3Scale.scaleT => axisT = "" [@@bs.module "d3-axis"];
external axisBottom : D3Scale.scaleT => axisT = "" [@@bs.module "d3-axis"];
external axisLeft : D3Scale.scaleT => axisT = "" [@@bs.module "d3-axis"];
external axisRight : D3Scale.scaleT => axisT = "" [@@bs.module "d3-axis"];
