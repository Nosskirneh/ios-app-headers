//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSString;

@interface SDLVideoStreamingFormat : SDLRPCStruct
{
}

@property(retain, nonatomic) NSString *codec;
@property(retain, nonatomic) NSString *protocol;
- (id)initWithCodec:(id)arg1 protocol:(id)arg2;

@end

