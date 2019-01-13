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

/* patch */
[@bs.module "patchinko"] external p: target => Patch.t = "P";

/* scope */
[@bs.module "patchinko"] external s: target => Scope.t = "S";

/* patch and scope */
[@bs.module "patchinko"] external ps: target => Patch.t = "PS";

/* delete */
[@bs.module "patchinko"] external del: target => unit = "D";

/* overload */
[@bs.module "patchinko"] external ov: target => Overload.t = "constant";

/* immutable */
[@bs.module "patchinko"] external im: target => Overload.t = "immutable";