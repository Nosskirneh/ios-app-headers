//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGDataLayerPersistentStoreCallback-Protocol.h"

@class TAGDataLayer;

@interface TAGDataLayerCallback : NSObject <TAGDataLayerPersistentStoreCallback>
{
    TAGDataLayer *_dataLayer;
}

@property(readonly) TAGDataLayer *dataLayer; // @synthesize dataLayer=_dataLayer;
- (void).cxx_destruct;
- (void)onKeyValuesLoaded:(id)arg1;
- (id)initWithDataLayer:(id)arg1;

@end

