//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNUXRegistry.h"

@class NSString;

@interface SPTNUXRegistryImplementation : NSObject <SPTNUXRegistry>
{
    id <SPTNUXModifying> _defaultNUX;
}

@property(retain, nonatomic) id <SPTNUXModifying> defaultNUX; // @synthesize defaultNUX=_defaultNUX;
- (void).cxx_destruct;
- (id)provideNUXForViewURI:(id)arg1;
- (void)registerDefaultNUX:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
