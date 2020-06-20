#pragma once

#include "BackyardTypes.h"

class SBackyard
{
public:

	void Initialize();
	void Deinitialize();

private:
	SNetworkLowLevel LowLevel{};

	HNetworkServer ServerHandle{ HHandle::Empty };

	bool ExitFlag{ false };

	void Update();

};
