//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTSettingsSectionItem.h"

@protocol YTMSettingsSectionItemDelegate;

@interface YTMSettingsSectionItem : YTSettingsSectionItem
{
    _Bool _asynchronous;
    id <YTMSettingsSectionItemDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMSettingsSectionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAsynchronous) _Bool asynchronous; // @synthesize asynchronous=_asynchronous;
- (void).cxx_destruct;
- (id)init;

@end
