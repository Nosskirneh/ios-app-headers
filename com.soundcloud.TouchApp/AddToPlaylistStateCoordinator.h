//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataSourceStateDelegate-Protocol.h"

@class NSString, StateDelegateLayout;
@protocol DataSourceStateDelegate;

@interface AddToPlaylistStateCoordinator : NSObject <DataSourceStateDelegate>
{
    id <DataSourceStateDelegate> _viewController;
    StateDelegateLayout *_layout;
}

@property(nonatomic) __weak StateDelegateLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <DataSourceStateDelegate> viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateForState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
