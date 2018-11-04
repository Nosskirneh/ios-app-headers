//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSString, UIColor;

@interface GLUEAccessoryIconButtonStyle : NSObject <GLUEStyle>
{
    UIColor *_iconColor;
    struct CGSize _size;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAccessoryIconButtonStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
