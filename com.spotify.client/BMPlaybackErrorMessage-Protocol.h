//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;
@protocol BMPlaybackIdentity;

@protocol BMPlaybackErrorMessage <NSObject>
@property(readonly, nonatomic) NSString *underlyingErrorComment;
@property(readonly, nonatomic) NSError *underlyingError;
@property(readonly, nonatomic) NSString *errorComment;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) id <BMPlaybackIdentity> identity;
@end

