#pragma once
class StateCar {
	public:
		virtual ~StateCar() = default;
		virtual void Accelerate() = 0;
		virtual void Brake() = 0;
		virtual void Turn() = 0;
};