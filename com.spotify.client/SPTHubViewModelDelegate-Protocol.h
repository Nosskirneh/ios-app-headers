//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTHubViewModel;

@protocol SPTHubViewModelDelegate <NSObject>
- (void)hubViewModel:(SPTHubViewModel *)arg1 didFailLoadingContentWithError:(NSError *)arg2;
- (void)hubViewModel:(SPTHubViewModel *)arg1 didUpdateBlockAtIndex:(unsigned long long)arg2;
- (void)hubViewModelDidFinishLoadingContent:(SPTHubViewModel *)arg1;
- (_Bool)hubViewModelShouldLoadOnlineContent:(SPTHubViewModel *)arg1;
@end

