//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HAMFormatDescription, HAMMediaChunk;

@protocol HAMMediaChunkDelegate <NSObject>
- (void)mediaChunk:(HAMMediaChunk *)arg1 didParseFormatDescription:(HAMFormatDescription *)arg2;
- (void)mediaChunkTimeRangeDidChange:(HAMMediaChunk *)arg1;
@end

