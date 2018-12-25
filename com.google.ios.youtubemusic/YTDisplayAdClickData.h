//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface YTDisplayAdClickData : NSObject
{
    int _clickLocationCode;
    NSURL *_adUrl;
    long long _touchX;
    long long _touchY;
    struct CGSize _viewSize;
}

@property(readonly, nonatomic) long long touchY; // @synthesize touchY=_touchY;
@property(readonly, nonatomic) long long touchX; // @synthesize touchX=_touchX;
@property(readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(readonly, nonatomic) int clickLocationCode; // @synthesize clickLocationCode=_clickLocationCode;
@property(readonly, nonatomic) NSURL *adUrl; // @synthesize adUrl=_adUrl;
- (void).cxx_destruct;
- (id)initWithAdUrl:(id)arg1 clickLocationCode:(int)arg2 viewSize:(struct CGSize)arg3 touchPoint:(struct CGPoint)arg4;

@end

