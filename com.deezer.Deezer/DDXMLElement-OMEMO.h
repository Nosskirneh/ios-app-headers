//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KissXML/DDXMLElement.h>

@interface DDXMLElement (OMEMO)
+ (id)omemo_keyTransportElementWithKeyData:(id)arg1 iv:(id)arg2 senderDeviceId:(unsigned int)arg3 xmlNamespace:(unsigned long long)arg4;
- (id)omemo_deviceListFromItems:(unsigned long long)arg1;
- (id)omemo_deviceListFromIqResponse:(unsigned long long)arg1;
- (id)omemo_iv;
- (id)omemo_payload;
- (id)omemo_keyData;
- (unsigned int)omemo_senderDeviceId;
- (id)omemo_headerElement;
- (id)omemo_encryptedElement:(unsigned long long)arg1;
- (_Bool)omemo_isEncryptedElement:(unsigned long long)arg1;
- (_Bool)omemo_hasEncryptedElement:(unsigned long long)arg1;
@end

