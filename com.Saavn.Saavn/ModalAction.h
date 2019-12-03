//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface ModalAction : NSObject
{
    _Bool _hasDivider;
    _Bool _isPushingNewView;
    _Bool _isPlayAction;
    _Bool _isLive;
    _Bool _isSelected;
    _Bool _isSaveButton;
    _Bool _noTinting;
    int _style;
    int _accessoryStyle;
    NSString *_label;
    NSString *_value;
    NSString *_iconName;
    NSDictionary *_modalData;
    UIColor *_tintColor;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _modalAction;
}

@property(copy, nonatomic) CDUnknownBlockType modalAction; // @synthesize modalAction=_modalAction;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) int accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool noTinting; // @synthesize noTinting=_noTinting;
@property(nonatomic) _Bool isSaveButton; // @synthesize isSaveButton=_isSaveButton;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool isPlayAction; // @synthesize isPlayAction=_isPlayAction;
@property(nonatomic) _Bool isPushingNewView; // @synthesize isPushingNewView=_isPushingNewView;
@property(nonatomic) _Bool hasDivider; // @synthesize hasDivider=_hasDivider;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSDictionary *modalData; // @synthesize modalData=_modalData;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)getData;
- (id)init;

@end
