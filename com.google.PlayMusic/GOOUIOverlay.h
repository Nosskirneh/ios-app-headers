//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface GOOUIOverlay : NSObject
{
    UIView *_view;
    CDUnknownBlockType _layoutBlock;
}

@property(copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

