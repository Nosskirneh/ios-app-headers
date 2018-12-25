//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKSCallToActionPanel, NSString, UIColor, UIImage;

@interface GKSCallToActionButtonDescriptor : NSObject
{
    _Bool _enabled;
    _Bool _raised;
    _Bool _primary;
    UIColor *_titleColor;
    NSString *_title;
    UIImage *_icon;
    UIColor *_backgroundColor;
    NSString *_accessibilityIdentifier;
    GKSCallToActionPanel *_delegate;
    id _target;
    SEL _action;
}

+ (id)secondaryButtonDefaultTitleColor;
+ (id)primaryButtonDefaultTitleColor;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(nonatomic) __weak GKSCallToActionPanel *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool raised; // @synthesize raised=_raised;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)wasStringEmptyOrIsStringGoingToBeEmpty:(id)arg1 oldString:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (id)init;

@end
