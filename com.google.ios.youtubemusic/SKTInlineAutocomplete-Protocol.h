//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTPeoplePicker-Protocol.h"

@class UIView;
@protocol SKTInlineAutocompleteDelegate;

@protocol SKTInlineAutocomplete <SKTPeoplePicker>
@property(nonatomic) long long currentState;
@property(readonly, nonatomic) UIView *suggestedContactsView;
@property(readonly, nonatomic) double autocompleteBarHeight;
@property(readonly, nonatomic) UIView *autocompleteBar;
@property(nonatomic) __weak id <SKTInlineAutocompleteDelegate> autocompleteDelegate;
@end

