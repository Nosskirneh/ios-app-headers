//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTFreeTierEducationSnackBarPresenter, SPTFreeTierEducationTooltipPresenter;

@protocol SPTFreeTierEducationService <SPTService>
- (id <SPTFreeTierEducationTooltipPresenter>)provideTooltipPresenterForViewURI:(NSURL *)arg1;
- (id <SPTFreeTierEducationSnackBarPresenter>)provideSnackbarPresenterForViewURI:(NSURL *)arg1;
@end

