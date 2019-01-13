type target;
module Scope = {
  type t;
};
module Patch = {
  type t;
};
module Overload = {
  type t;
};

/* [@bs.module "patchinko"] */
/* patch */
[@bs.send] external p: target => Patch.t = "P";

/* scope */
[@bs.send] external s: target => Scope.t = "S";

/* patch and scope */
[@bs.send] external ps: target => Patch.t = "PS";

/* delete */
[@bs.send] external del: target => unit = "D";

/* overload */
[@bs.send] external ov: target => Overload.t = "constant";

/* immutable */
[@bs.send] external im: target => Overload.t = "immutable";