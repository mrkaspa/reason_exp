[@bs.deriving abstract]
type center = {
  lat: float,
  lng: float,
};

[@bs.deriving abstract]
type bootstrapURLKeys = {key: string};

[@bs.module "google-map-react"] [@react.component "GoogleMapReact"]
external make:
  (
    ~bootstrapURLKeys: bootstrapURLKeys,
    ~zoom: int,
    ~center: center,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
