//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSListItemViewAccessoryViewFactory-Protocol.h"

@class NSString, UIColor, UIFont;

@interface GKSLabelAccessoryFactory : NSObject <GKSListItemViewAccessoryViewFactory>
{
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)initWithText:(id)arg1 font:(id)arg2 color:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
