#pragma once

#include "BackyardTypes.h"
#include "System/Network/Network.h"

class SBackyard
{
public:
	explicit SBackyard(SNetwork& Network);

	void Initialize();
	void Deinitialize();

	void BackyardRequestTest(const FNetworkAddress& Address);
	void BackyardResponseTest(const FNetworkAddress& Address);

private:
	SNetwork& Network;

	THandleStorage<HPlayerState, FPlayerState, 0> Players;

	bool ExitFlag{ false };

	void Update();

};
