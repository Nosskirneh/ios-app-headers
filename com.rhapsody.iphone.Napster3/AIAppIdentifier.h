//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AIAppIdentifier : NSObject
{
}

+ (id)appIdentifier;
- (id)getAppVariantIdForPackage:(id)arg1;
- (id)getAppFamilyIdForPackage:(id)arg1;
- (id)getAPIKeyForPackage:(id)arg1;
- (id)getAppPermissionsForPackage:(id)arg1;
- (id)getAllowedScopesForPackage:(id)arg1;
- (id)getAppIdForPackage:(id)arg1;
- (id)getAppInfoForPackage:(id)arg1;
- (_Bool)isAPIKey:(id)arg1 validForPackage:(id)arg2;
- (_Bool)isAPIKeyValid;
- (id)init;

@end

