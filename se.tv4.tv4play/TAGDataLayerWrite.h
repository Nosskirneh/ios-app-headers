//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGTrackingTag.h"

@class TAGDataLayer;

@interface TAGDataLayerWrite : TAGTrackingTag
{
    TAGDataLayer *_dataLayer;
}

+ (id)valueKey;
+ (id)functionId;
@property(retain, nonatomic) TAGDataLayer *dataLayer; // @synthesize dataLayer=_dataLayer;
- (void).cxx_destruct;
- (void)pushToDataLayer:(id)arg1;
- (void)clearPersistent:(id)arg1;
- (void)evaluateTrackingTag:(id)arg1;
- (id)initWithDataLayer:(id)arg1;

@end

