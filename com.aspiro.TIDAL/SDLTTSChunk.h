//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSString;

@interface SDLTTSChunk : SDLRPCStruct
{
}

+ (id)sdl_chunksFromString:(id)arg1 type:(id)arg2;
+ (id)silenceChunks;
+ (id)prerecordedChunksFromString:(id)arg1;
+ (id)lhPlusChunksFromString:(id)arg1;
+ (id)sapiChunksFromString:(id)arg1;
+ (id)textChunksFromString:(id)arg1;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSString *text;
- (id)initWithText:(id)arg1 type:(id)arg2;

@end

