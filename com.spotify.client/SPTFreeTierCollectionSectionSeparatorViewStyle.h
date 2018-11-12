//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTFreeTierCollectionSectionSeparatorViewStyle : NSObject <GLUEStyle>
{
    double _height;
    double _separatorHeight;
    double _margin;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

