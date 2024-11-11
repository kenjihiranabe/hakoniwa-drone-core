#ifndef _IDISCHARGE_DYNAMICS_HPP_
#define _IDISCHARGE_DYNAMICS_HPP_


namespace hako::assets::drone {

class IDischargeDynamics {
public:
    virtual ~IDischargeDynamics() {};
    virtual double get_discharged() = 0;
};
}

#endif /* _IDISCHARGE_DYNAMICS_HPP_ */