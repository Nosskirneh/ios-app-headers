//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface TimeUpButtonModel : NSObject
{
    NSString *_buttonTitle;
    NSString *_subtitle;
    NSString *_action;
    NSString *_duration;
    NSString *_invite;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *invite; // @synthesize invite=_invite;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (id)initWithGDataXMLElement:(id)arg1;
- (id)initWithTBXMLElement:(struct _TBXMLElement *)arg1;

@end

