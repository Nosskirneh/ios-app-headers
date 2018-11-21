//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SPTFeatureSettingsPage : NSObject
{
    _Bool _requiresRestart;
    _Bool _requiresRerender;
    NSString *_title;
    NSMutableArray *_mutableItems;
    long long _featureSettingValue;
}

@property(nonatomic) long long featureSettingValue; // @synthesize featureSettingValue=_featureSettingValue;
@property(nonatomic) _Bool requiresRerender; // @synthesize requiresRerender=_requiresRerender;
@property(nonatomic) _Bool requiresRestart; // @synthesize requiresRestart=_requiresRestart;
@property(readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) __weak NSArray *items;
- (void)removeAllItems;
- (void)addItem:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

