//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTHubRemoteContentURLResolver <NSObject>
- (NSURL *)remoteHubContentURLForEndpointPath:(NSString *)arg1 forExternalData:(_Bool)arg2;
- (NSURL *)remoteHubContentURLForViewURI:(NSURL *)arg1;
@end

