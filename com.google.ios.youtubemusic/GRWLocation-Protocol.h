//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GRWLocation;

@protocol GRWLocation <NSObject>
@property(readonly, nonatomic) NSString *formattedCoordinates;
@property(readonly, nonatomic) NSString *formattedAddress;

@optional
- (_Bool)isEqualToLocation:(id <GRWLocation>)arg1;
@end

