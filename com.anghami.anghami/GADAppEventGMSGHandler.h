//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADSlot;

@interface GADAppEventGMSGHandler : GADGMSGHandler
{
    GADSlot *_slot;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (_Bool)shouldBufferNotification:(id)arg1 adView:(id)arg2;
- (void)adView:(id)arg1 didReceiveAppEventNotification:(id)arg2;
- (id)initWithSlot:(id)arg1;
- (id)init;

@end

