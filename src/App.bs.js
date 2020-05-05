// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var GoogleMapReact = require("google-map-react");
var Button = require("@material-ui/core/Button/Button");

function App(Props) {
  var greeting = Props.greeting;
  var match = React.useReducer((function (state, action) {
          if (action) {
            return {
                    count: state.count,
                    show: !state.show
                  };
          } else {
            return {
                    count: state.count + 1 | 0,
                    show: state.show
                  };
          }
        }), {
        count: 0,
        show: true
      });
  var dispatch = match[1];
  var state = match[0];
  var message = "You've clicked this " + (String(state.count) + " times(s)");
  return React.createElement("div", undefined, React.createElement("div", {
                  style: {
                    height: "300px",
                    width: "100%"
                  }
                }, React.createElement(GoogleMapReact.default, {
                      bootstrapURLKeys: {
                        key: "AIzaSyCzMvSw0Kku8MhtFV-ZrJV4Za6x5wEEH8Q"
                      },
                      zoom: 11,
                      center: {
                        lat: 59.95,
                        lng: 30.33
                      }
                    })), React.createElement("div", undefined, React.createElement(Button.default, {
                      color: "primary",
                      children: "Load map"
                    })), React.createElement("button", {
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* Click */0);
                    })
                }, message), React.createElement("button", {
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* Toggle */1);
                    })
                }, "Toggle greeting"), state.show ? greeting : null);
}

var make = App;

exports.make = make;
/* react Not a pure module */
