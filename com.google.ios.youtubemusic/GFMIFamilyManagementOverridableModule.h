//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIMModule-Protocol.h"

@class NSString;
@protocol GIMProvider;

@interface GFMIFamilyManagementOverridableModule : NSObject <GIMModule>
{
    id <GIMProvider> _enableReauthenticationProvider;
}

@property(retain, nonatomic) id <GIMProvider> enableReauthenticationProvider; // @synthesize enableReauthenticationProvider=_enableReauthenticationProvider;
- (void).cxx_destruct;
- (void)configureWithBinder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

