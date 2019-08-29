//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LegicBlePluginApduProcessor : NSObject
{
}

- (_Bool)bluetoothSupported:(struct Apdu *)arg1;
- (_Bool)idcMessageOperation:(id)arg1 jsonDict:(id)arg2 response:(struct Apdu *)arg3;
- (_Bool)setDeviceIdOperation:(id)arg1 jsonDict:(id)arg2 response:(struct Apdu *)arg3;
- (_Bool)afterRegistrationOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)getInfoOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)configParamUpdatedOperation:(id)arg1 jsonDict:(id)arg2 response:(struct Apdu *)arg3;
- (_Bool)deactivateOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)activateOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)inventoryOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)deleteOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)readOperation:(id)arg1 response:(struct Apdu *)arg2;
- (_Bool)writeOperation:(id)arg1 response:(struct Apdu *)arg2;
- (unsigned long long)detectOperationType:(id)arg1;
- (void)createOkResponse:(struct Apdu *)arg1;
- (void)createErrorResponse:(struct Apdu *)arg1 code:(int)arg2 message:(id)arg3;
- (id)collectInfo:(id)arg1 error:(id *)arg2;
- (void)writeApduToLog:(id)arg1 command:(const struct Apdu *)arg2 response:(const struct Apdu *)arg3;
- (struct SeError)processApdu:(const struct Apdu *)arg1 response:(struct Apdu *)arg2;

@end
