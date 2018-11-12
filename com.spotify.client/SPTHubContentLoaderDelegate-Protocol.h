//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTHubContentLoader, SPTHubContentSetImplementation;

@protocol SPTHubContentLoaderDelegate <NSObject>
- (void)hubContentLoader:(SPTHubContentLoader *)arg1 didEncounterError:(NSError *)arg2;
- (void)hubContentLoader:(SPTHubContentLoader *)arg1 didLoadContentSet:(SPTHubContentSetImplementation *)arg2;
- (_Bool)hubContentLoaderShouldLoadRemoteContent:(SPTHubContentLoader *)arg1;
@end

