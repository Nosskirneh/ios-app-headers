//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSListItemViewAccessoryViewFactory-Protocol.h"

@class GKSButtonObject, NSString;

@interface GKSButtonAccessoryFactory : NSObject <GKSListItemViewAccessoryViewFactory>
{
    GKSButtonObject *_buttonObject;
}

@property(readonly, nonatomic) GKSButtonObject *buttonObject; // @synthesize buttonObject=_buttonObject;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)initWithButtonObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

