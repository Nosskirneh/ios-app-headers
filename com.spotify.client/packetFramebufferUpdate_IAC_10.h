//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePacket.h"

@class FrameRectangleList_IAC_10;

@interface packetFramebufferUpdate_IAC_10 : BasePacket
{
    FrameRectangleList_IAC_10 *_updateRegions;
}

@property(retain) FrameRectangleList_IAC_10 *updateRegions; // @synthesize updateRegions=_updateRegions;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

