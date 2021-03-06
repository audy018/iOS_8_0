{ Parsed from ExternalAccessory.framework (iPhoneOS8.2) EAAccessoryManager.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EAAccessoryManagerPtr = ^EAAccessoryManager;
{$endif}

{$ifdef TYPES}
type
  EABluetoothAccessoryPickerErrorCode = NSInteger;
  EABluetoothAccessoryPickerErrorCodePtr = ^EABluetoothAccessoryPickerErrorCode;

const
  EABluetoothAccessoryPickerAlreadyConnected = 0;
  EABluetoothAccessoryPickerResultNotFound = 1;
  EABluetoothAccessoryPickerResultCancelled = 2;
  EABluetoothAccessoryPickerResultFailed = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  EABluetoothAccessoryPickerErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  EABluetoothAccessoryPickerCompletion = OpaqueCBlock;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  EAAccessoryDidConnectNotification: NSString { available starting in __MAC_NA,__IPHONE_3_0 }; cvar; external;
  EAAccessoryDidDisconnectNotification: NSString { available starting in __MAC_NA,__IPHONE_3_0 }; cvar; external;
  EAAccessoryKey: NSString { available starting in __MAC_NA,__IPHONE_3_0 }; cvar; external;
  EAAccessorySelectedKey: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  EAAccessoryManager = objcclass external (NSObject)
  private
    _connectedAccessories: NSMutableArray;
  public
    class function sharedAccessoryManager: EAAccessoryManager; message 'sharedAccessoryManager'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure showBluetoothAccessoryPickerWithNameFilter_completion (predicate: NSPredicate; completion: EABluetoothAccessoryPickerCompletion); message 'showBluetoothAccessoryPickerWithNameFilter:completion:'; { available starting in __MAC_NA,__IPHONE_6_0 }
    procedure registerForLocalNotifications; message 'registerForLocalNotifications'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure unregisterForLocalNotifications; message 'unregisterForLocalNotifications'; { available starting in __MAC_NA,__IPHONE_3_0 }
    function connectedAccessories: NSArray; message 'connectedAccessories';
  end;
{$endif}

