//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface ANGAPIButton : NSObject
{
    _Bool _isMainButton;
    int _type;
    NSString *_deeplink;
    NSString *_text;
    UIColor *_color;
}

@property _Bool isMainButton; // @synthesize isMainButton=_isMainButton;
@property(copy) UIColor *color; // @synthesize color=_color;
@property(copy) NSString *text; // @synthesize text=_text;
@property(copy) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)getButtonTypeForString:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

