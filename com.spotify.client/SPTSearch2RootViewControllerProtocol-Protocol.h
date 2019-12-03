//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTSearch2RootViewControllerProtocol <NSObject>
@property(nonatomic) _Bool shouldFocusSearchBarOnViewDidAppear;
@property(nonatomic) _Bool voiceSearchAllowed;
@property(readonly, copy, nonatomic) NSString *requestID;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) _Bool automaticallyAdjustsInsets;
@property(nonatomic) struct UIEdgeInsets insets;
@property(nonatomic) unsigned long long cancelButtonVisibility;
- (void)logQueryClear;
- (void)returnKeyPressed;
- (void)resetSearch;
- (void)focusSearchBar;
@end

