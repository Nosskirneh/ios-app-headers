//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTAuthPhoneNumberIdentifier : NSObject
{
    struct optional<spotify::connectivity::auth::Identifier> _identifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Identifier *)cpp;
- (id)initWithNumber:(id)arg1 isoCountryCode:(id)arg2 countryCallingCode:(id)arg3;

@end

