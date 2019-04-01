//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPNotification.h"

@class NSArray, NSString;

@interface MPTakeoverNotification : MPNotification
{
    _Bool _shouldFadeImage;
    NSString *_title;
    unsigned long long _titleColor;
    unsigned long long _closeButtonColor;
    NSArray *_buttons;
}

@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) _Bool shouldFadeImage; // @synthesize shouldFadeImage=_shouldFadeImage;
@property(nonatomic) unsigned long long closeButtonColor; // @synthesize closeButtonColor=_closeButtonColor;
@property(nonatomic) unsigned long long titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)type;
- (id)initWithJSONObject:(id)arg1;

@end

