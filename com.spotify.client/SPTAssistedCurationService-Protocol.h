//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTAssistedCurationAddTrackHandler, SPTAssistedCurationModel;

@protocol SPTAssistedCurationService <SPTService>
- (id <SPTAssistedCurationAddTrackHandler>)provideAddTrackHandlerForURI:(NSURL *)arg1;
- (id <SPTAssistedCurationModel>)provideAssistedCurationModelForURI:(NSURL *)arg1 mostPlayedCard:(_Bool)arg2;
@end

