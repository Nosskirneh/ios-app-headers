//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDCAppBarViewController, MDCFlexibleHeaderViewController, MDCHeaderStackView, MDCNavigationBar;

@interface MDCAppBar : NSObject
{
    MDCAppBarViewController *_appBarViewController;
}

@property(readonly, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
- (void).cxx_destruct;
@property(nonatomic) _Bool inferTopSafeAreaInsetFromViewController;
- (void)addSubviewsToParent;
@property(readonly, nonatomic) MDCNavigationBar *navigationBar;
@property(readonly, nonatomic) MDCHeaderStackView *headerStackView;
@property(readonly, nonatomic) MDCFlexibleHeaderViewController *headerViewController;
- (id)init;

@end

