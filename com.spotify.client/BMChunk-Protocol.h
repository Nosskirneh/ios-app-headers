//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@protocol BMChunk <NSCoding>
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long startPosition;
@property(readonly, nonatomic) NSString *key;
@end

