//
// Created by han on 18-7-12.
//

#ifndef ARTROBOT_TRAJECTORYGENERATOR_H
#define ARTROBOT_TRAJECTORYGENERATOR_H

class TrajectoryGenerator{

        public:
        TrajectoryGenerator(double total_time, int interval_num);
        ~TrajectoryGenerator() = default;

        void set_position(double begin, double end);

        double calc(int index);

        private:
        double T_;
        int interval_num_;
        double interval_unit_;

        double shift_val_;
        double end_;

        double t_;
        double value_;
        double C_4_;
        double C_3_;
        double C_5_;
};
#endif
