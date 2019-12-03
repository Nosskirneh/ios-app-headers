//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeHomeFeedListObserver-Protocol.h"

@class NSArray, NSString, SPTDrivingModeHomeFeedList;
@protocol SPTDrivingModeHomeFeedViewModelDelegate;

@interface SPTDrivingModeHomeFeedViewModel : NSObject <SPTDrivingModeHomeFeedListObserver>
{
    NSArray *_shelves;
    id <SPTDrivingModeHomeFeedViewModelDelegate> _delegate;
    unsigned long long _selectedItemIndex;
    SPTDrivingModeHomeFeedList *_homeFeedList;
}

@property(readonly, nonatomic) SPTDrivingModeHomeFeedList *homeFeedList; // @synthesize homeFeedList=_homeFeedList;
@property(nonatomic) unsigned long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(nonatomic) __weak id <SPTDrivingModeHomeFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *shelves; // @synthesize shelves=_shelves;
- (void).cxx_destruct;
- (void)homeFeedListDidUpdate:(id)arg1;
- (id)currentShelf;
- (void)viewWillBeDismissed;
- (void)viewWillBePresented;
- (id)initWithHomeFeedList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

