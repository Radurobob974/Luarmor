setfpscap(1000)

print("Sydie Loaded")

local g = getinfo or debug.getinfo
local d = false
local h = {}

local x, y

setthreadidentity(2)

for i, v in getgc(true) do
    if typeof(v) == "table" then
        local a = rawget(v, "Detected")
        local b = rawget(v, "Kill")
    
        if typeof(a) == "function" and not x then
            x = a
            
            local o; o = hookfunction(x, function(c, f, n)
                if c ~= "_" then
                    if d then
                    end
                end
                
                return true
            end)

            table.insert(h, x)
        end

        if rawget(v, "Variables") and rawget(v, "Process") and typeof(b) == "function" and not y then
            y = b
            local o; o = hookfunction(y, function(f)
                if d then
                end
            end)

            table.insert(h, y)
        end
    end
end

local o; o = hookfunction(getrenv().debug.info, newcclosure(function(...)
    local a, f = ...

    if x and a == x then
        if d then
        end

        return coroutine.yield(coroutine.running())
    end
    
    return o(...)
end))

setthreadidentity(7)

if game.PlaceId == 7213786345 or game.PlaceId == 16033173781 or game.PlaceId == 2788229376 then
    local a = {
        "BANREMOTE",
        "PERMAIDBAN",
        "KICKREMOTE", 
        "BR_KICKPC",
        "BR_KICKMOBILE",
        "OneMoreTime",
        "CHECKER_1",
        "TeleportDetect",
        "CHECKER",
        "GUI_CHECK",
        "checkingSPEED",
        "CHECKER_1", 
        "TeleportDetect",
        "OneMoreTime",
        "PERMA-BAN",
        "PERMABAN",
        "BreathingHAMON",
        "JJARC",
        "TakePoisonDamage",
        "FORCEFIELD",
        "Christmas_Sock",
        "VirusCough",
        "Symbiote",
        "Symbioted",
        "RequestAFKDisplay"
    }

    local Remote

    local FireHook
    FireHook = hookmetamethod(
        game,
        "__namecall",
        function(...)
            local c = {...}
            local self, d, e = c[1], getnamecallmethod(), getcallingscript()
            if d == "FireServer" and self == Remote and table.find(a, c[2]) then
                return
            end
            return FireHook(...)
        end
    )

    local RemoteNames = {"MainEvent", "Bullets", "Remote", "MAINEVENT"}
    for _, remote in pairs(game.ReplicatedStorage:GetDescendants()) do
        if table.find(RemoteNames, remote.Name) and remote:IsA("RemoteEvent") then
            Remote = remote
            break
        end
    end

    return Remote
end

local runservice = game:GetService("RunService")
local camera = workspace.CurrentCamera
local players = game:GetService("Players")
local replicatedStorage = game:GetService("ReplicatedStorage")
local localplayer = players.LocalPlayer
local inputservice = game:GetService("UserInputService")
local mouse = localplayer:GetMouse()
local SoundService = game:GetService("SoundService")
local Stats = game:GetService("Stats")
local Player = game:GetService("Players").LocalPlayer

local repo = 'https://raw.githubusercontent.com/VardySc/Pornhub/main/'
local library = loadstring(game:HttpGet('https://raw.githubusercontent.com/VardySc/Pornhub/main/Library.lua'))()
local thememanager = loadstring(game:HttpGet(repo .. 'addons/ThemeManager.lua'))()
local savemanager = loadstring(game:HttpGet(repo .. 'addons/SaveManager.lua'))()

Library:SetWatermarkVisibility(true)

local FrameTimer = tick()
local FrameCounter = 0
local FPS = 60

local WatermarkConnection = game:GetService('RunService').RenderStepped:Connect(function()
    FrameCounter += 1

    if (tick() - FrameTimer) >= 1 then
        FPS = FrameCounter
        FrameTimer = tick()
        FrameCounter = 0
    end

    local currentTime = os.date("%H:%M:%S")

    Library:SetWatermark(('Sydie.lol | %s fps | %s ms | Time: %s'):format(
        math.floor(FPS),
        math.floor(game:GetService('Stats').Network.ServerStatsItem['Data Ping']:GetValue()),
        currentTime
    ))
end)

local ToggleGui = Instance.new("ScreenGui")
ToggleGui.Name = "UIToggle"
ToggleGui.ResetOnSpawn = false
ToggleGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
ToggleGui.Parent = game.CoreGui

local ToggleButton = Instance.new("TextButton")
ToggleButton.Size = UDim2.new(0, 70, 0, 50)
ToggleButton.Position = UDim2.new(1, -110, 0, 10)
ToggleButton.BackgroundColor3 = Color3.fromRGB(10, 10, 10)
ToggleButton.BackgroundTransparency = 0.2
ToggleButton.TextColor3 = Color3.fromRGB(255, 255, 255)
ToggleButton.Text = "Hide UI"
ToggleButton.Font = Enum.Font.Code
ToggleButton.TextSize = 14
ToggleButton.Parent = ToggleGui

local Outline = Instance.new("UIStroke")
Outline.Color = Color3.fromRGB(255, 255, 255)
Outline.Thickness = 1
Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
Outline.Parent = ToggleButton

Instance.new("UICorner", ToggleButton).CornerRadius = UDim.new(0, 10)

local isVisible = true
ToggleButton.MouseButton1Click:Connect(function()
    if library and library.Toggle then
        library:Toggle()
        isVisible = not isVisible
        ToggleButton.Text = isVisible and "Hide UI" or "Show UI"
    end
end)

local game_name = game:GetService("MarketplaceService"):GetProductInfo(game.PlaceId).Name

getgenv().Zenith = {
  Settings = {
    Smoothness = 0.1,
  },
  
  Camlock = {
    enabled = true,
    resolver = false,
    Prediction = 0.1,
    HitPart = "HumanoidRootPart",
    target = nil
  },

  Targetaim = {
    enabled = true,
    target = nil,
    Prediction = 0.1,
    HitPart = "HumanoidRootPart",
    Method = "Namecall"
  },
  
  AutoAir = {
     enabled = true,
     jumpOffset = 0.8,
     delay = 0.1,
     AirPart = "RightFoot"
  }
}

getgenv().crosshair = {
    enabled = false,
    refreshrate = 0,
    mode = "center",
    position = Vector2.new(0, 0),
    width = 1.5,
    length = 10,
    radius = 11,
    color = Color3.fromRGB(255, 255, 255),
    spin = true,
    spin_speed = 120,
    spin_max = 200,
    spin_style = Enum.EasingStyle.Circular,
    resize = true,
    resize_speed = 150,
    resize_min = 5,
    resize_max = 22
}

local window = library:CreateWindow({
    Title = 'ZENITH.LOL | V.2.5 | .gg/zenith | ' .. game_name,
    Center = true,
    AutoShow = true
})

local tabs = {
    combat = window:AddTab('Legit'),
    raging = window:AddTab('Blatant'),
    visuals = window:AddTab('Misc'),
    credit = window:AddTab('Credits'),
    config = window:AddTab('Config')
}

local Zenith = getgenv().Zenith

local TweenService = game:GetService("TweenService")
local CoreGui = game:GetService("CoreGui")
local Lighting = game:GetService("Lighting")
local SoundService = game:GetService("SoundService")
local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer
local PlayerGui = LocalPlayer:WaitForChild("PlayerGui")
local Camera = workspace.CurrentCamera

local function FindNearestEnemy()
  local closest = nil
	local shortestDist = math.huge
	for _, plr in ipairs(Players:GetPlayers()) do
		if plr ~= LocalPlayer and plr.Character and plr.Character:FindFirstChild("HumanoidRootPart") then
			local pos = plr.Character.HumanoidRootPart.Position
			local screenPos, onScreen = Camera:WorldToViewportPoint(pos)
			if onScreen then
				local dist = (Vector2.new(screenPos.X, screenPos.Y) - Camera.ViewportSize / 2).Magnitude
				if dist < shortestDist then
					shortestDist = dist
					closest = plr
				end
			end
		end
	end
	return closest
end

local ScreenGui = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local TextButton = Instance.new("ImageButton")
local UICorner = Instance.new("UICorner")

local CoreGui = game:GetService("CoreGui")
ScreenGui.Parent = CoreGui
ScreenGui.ResetOnSpawn = false
ScreenGui.Enabled = true

Frame.Parent = ScreenGui
Frame.BackgroundTransparency = 1
Frame.Position = UDim2.new(0.5, 0, 0.5, 0)
Frame.Size = UDim2.new(0, 90, 0, 90)
Frame.Active = true

TextButton.Parent = Frame
TextButton.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
TextButton.BackgroundTransparency = 0.5
TextButton.Size = UDim2.new(0, 75, 0, 75)
TextButton.AnchorPoint = Vector2.new(0.5, 0.5)
TextButton.Position = UDim2.new(0.5, 0, 0.5, 0)
TextButton.Image = "rbxassetid://77630356067392"
TextButton.Active = true

local Outline = Instance.new("UIStroke")
Outline.Color = Color3.fromRGB(255, 255, 255)
Outline.Thickness = 1
Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
Outline.Parent = TextButton

TextButton.InputBegan:Connect(function(input)
    if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
        dragging = true
        dragStart = input.Position
        startPos = TextButton.Position

        input.Changed:Connect(function()
            if input.UserInputState == Enum.UserInputState.End then
                dragging = false
            end
        end)
    end
end)

TextButton.InputChanged:Connect(function(input)
    if dragging and (input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch) then
        local delta = input.Position - dragStart
        TextButton.Position = UDim2.new(
            startPos.X.Scale, startPos.X.Offset + delta.X,
            startPos.Y.Scale, startPos.Y.Offset + delta.Y
        )
    end
end)

UICorner.Parent = TextButton
UICorner.CornerRadius = UDim.new(0, 12)

TextButton.MouseButton1Click:Connect(function()
    getgenv().Zenith.Camlock.enabled = not getgenv().Zenith.Camlock.enabled
    
    if getgenv().Zenith.Camlock.enabled then
        local enemy = FindNearestEnemy()
        if enemy then
            getgenv().Zenith.Camlock.target = enemy
            getgenv().Zenith.Targetaim.target = enemy 
            TextButton.Image = "rbxassetid://138552945575395"
            library:Notify("ZN: Enabled, Target: " .. enemy.DisplayName, 2)
        else
            getgenv().Zenith.Camlock.enabled = false
            getgenv().Zenith.Targetaim.enabled = false
            TextButton.Image = "rbxassetid://129225087302154"
            library:Notify("No Target Found", 2)
        end
    else
        getgenv().Zenith.Camlock.target = nil
        getgenv().Zenith.Targetaim.target = nil
        TextButton.Image = "rbxassetid://129225087302154"
        library:Notify("ZN: Spared Target", 2)
    end
end)

RunService.Heartbeat:Connect(function()
    if Zenith.Camlock.enabled then
        local camTarget = Zenith.Camlock.target
        if camTarget and camTarget.Character then
            local camPart = camTarget.Character:FindFirstChild(Zenith.Camlock.HitPart)
            if camPart then
                local camPredicted = camPart.Position 
                    + (camPart.Velocity * Zenith.Camlock.Prediction)

                local camGoal = CFrame.new(Camera.CFrame.Position, camPredicted)
                Camera.CFrame = Camera.CFrame:Lerp(camGoal, Zenith.Settings.Smoothness)
            end
        end
    end

    if Zenith.AutoAir.enabled then
        local Victim = Zenith.Targetaim.target
        if Victim and Victim.Character then
            local TargetRootPart = Victim.Character:FindFirstChild(Zenith.AutoAir.AirPart)
            if TargetRootPart then
                local TargetVel = TargetRootPart.Velocity
                if TargetVel.Y > 25 then
                    local Character = LocalPlayer.Character
                    if Character then
                        local Tool = Character:FindFirstChildOfClass("Tool")
                        if Tool then
                            task.wait(Zenith.AutoAir.delay)
                            Tool:Activate()
                        end
                    end
                end
            end
        end
    end
end)

if not Zenith.Camlock.enabled and Zenith.AutoAir.enabled then return end

if Zenith.Targetaim.Method == "Namecall" then
    local __namecall
    __namecall = hookmetamethod(game, "__namecall", newcclosure(function(Self, ...)
        local Args = {...}
        local Method = tostring(getnamecallmethod())
        if not checkcaller() and Method == "FireServer" then
            for i, Arg in pairs(Args) do
                if typeof(Arg) == "Vector3" and Zenith.Targetaim.enabled then
                    local Target = Zenith.Targetaim.target
                    if Target and Target.Character and Zenith.Targetaim.HitPart and Target.Character[Zenith.Targetaim.HitPart] then
                        local TargetPart = Target.Character[Zenith.Targetaim.HitPart]
                        local offset = Zenith.AutoAir and Zenith.AutoAir.jumpOffset or 0
                        local predictedPosition = TargetPart.Position
                            + (TargetPart.Velocity * Zenith.Targetaim.Prediction)
                            + Vector3.new(0, Zenith.AutoAir.jumpOffset, 0)

                        Args[i] = predictedPosition
                    end
                    return __namecall(Self, unpack(Args))
                end
            end
        end
        return __namecall(Self, ...)
    end))
end

if Zenith.Targetaim.Method == "Index" then
    local index = nil
    index = hookmetamethod(game, "__index", newcclosure(function(Object, Key, ...)
        if Object:IsA("Mouse") and Key == "Hit" then
            local Target = Zenith.Targetaim.target
            if Zenith.Targetaim.enabled and Target and Target.Character and Zenith.Targetaim.HitPart and Target.Character[Zenith.Targetaim.HitPart] then
                local TargetPart = Target.Character[Zenith.Targetaim.HitPart]
                local offset = Zenith.AutoAir and Zenith.AutoAir.jumpOffset or 0
                local predictedPosition = TargetPart.Position
                    + (TargetPart.Velocity * Zenith.Targetaim.Prediction)
                    + Vector3.new(0, Zenith.AutoAir.jumpOffset, 0)
                return CFrame.new(predictedPosition)
            end
        end
        return index(Object, Key, ...)
    end))
end

if not Zenith.Targetaim.enabled then return end

local function onHeartbeat()
    if not getgenv().Zenith.Camlock.resolver then return end

    for _, Target in pairs(Players:GetPlayers()) do
        if Target ~= LocalPlayer and Target.Character then
            local Character = Target.Character
            local Humanoid = Character:FindFirstChildOfClass("Humanoid")

            if Humanoid and Humanoid.MoveDirection.Magnitude > 0 then
                local moveVelocity = Humanoid.MoveDirection * 16

                local TargetParts = {
                    "HumanoidRootPart",
                    "UpperTorso",
                    "LowerTorso",
                    "LeftUpperLeg",
                    "LeftLowerLeg",
                    "RightUpperLeg",
                    "RightLowerLeg",
                    "Head",
                    "LeftHand",
                    "RightHand"
                }

                for _, partName in ipairs(TargetParts) do
                    local Part = Character:FindFirstChild(partName)
                    if Part then
                        Part.Velocity = moveVelocity
                        Part.AssemblyLinearVelocity = moveVelocity
                    end
                end
            end
        end
    end
end

RunService.Heartbeat:Connect(onHeartbeat)

getgenv().cframe = getgenv().cframe or {}
local cframe = getgenv().cframe

cframe.settings = {
    enabled = true,
    showbutton = true,
    speed = 1
}

local TweenService = game:GetService("TweenService")
local CoreGui = game:GetService("CoreGui")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer
local PlayerGui = LocalPlayer:WaitForChild("PlayerGui")
local RunService = game:GetService("RunService")
local Camera = workspace.CurrentCamera
local UserInputService = game:GetService("UserInputService")

if cframe.settings.showbutton then
    local ScreenGui = Instance.new("ScreenGui")
    ScreenGui.Name = "SpeedCFrameGUI"
    ScreenGui.ResetOnSpawn = false
    ScreenGui.Parent = game.CoreGui

    local Button = Instance.new("TextButton")
    Button.Name = "SpeedCFrameButton"
    Button.Size = UDim2.new(0, 80, 0, 60)
    Button.Position = UDim2.new(0.5, -95, 0.5, -35)
    Button.BackgroundColor3 = Color3.fromRGB(20, 20, 20)
    Button.BackgroundTransparency = 0.1
    Button.Text = cframe.settings.enabled and "CF: ON" or "CF: OFF"
    Button.TextColor3 = Color3.fromRGB(255, 255, 255)
    Button.Font = Enum.Font.Code
    Button.TextSize = 18
    Button.Parent = ScreenGui
    
    local Outline = Instance.new("UIStroke")
    Outline.Color = Color3.fromRGB(250, 250, 250)
    Outline.Thickness = 1
    Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
    Outline.Parent = Button

    local UICorner = Instance.new("UICorner")
    UICorner.CornerRadius = UDim.new(0, 10)
    UICorner.Parent = Button

    Button.MouseButton1Click:Connect(function()
        cframe.settings.enabled = not cframe.settings.enabled
        Button.Text = cframe.settings.enabled and "CF: ON" or "CF: OFF"
    end)

    -- Dragging support
    local dragging = false
    local startPos, startMousePos

    Button.InputBegan:Connect(function(input)
        if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
            dragging = true
            startPos = Button.Position
            startMousePos = input.Position
            input.Changed:Connect(function()
                if input.UserInputState == Enum.UserInputState.End then
                    dragging = false
                end
            end)
        end
    end)

    Button.InputChanged:Connect(function(input)
        if dragging and (input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch) then
            local delta = input.Position - startMousePos
            Button.Position = UDim2.new(
                startPos.X.Scale, startPos.X.Offset + delta.X,
                startPos.Y.Scale, startPos.Y.Offset + delta.Y
            )
        end
    end)
end

if not getgenv().cframe.settings.showbutton then return end

RunService.Heartbeat:Connect(function()
    if cframe.settings.enabled and LocalPlayer.Character then
        local root = LocalPlayer.Character:FindFirstChild("HumanoidRootPart")
        local humanoid = LocalPlayer.Character:FindFirstChild("Humanoid")
        if root and humanoid then
            local move_dir = humanoid.MoveDirection
            root.CFrame = root.CFrame + (move_dir * cframe.settings.speed)
        end
    end
end)

local function startAutoPrediction()
	if autoPredictionRunning then return end
	autoPredictionRunning = true

	task.spawn(function()
		while autoPredictionRunning do
			local ping = getPing()
			local pred = 0.135

			if ping <= 60 then
                pred = 0.1133182551
            elseif ping <= 70 then
                pred = 0.1363547424
            elseif ping <= 80 then
                pred = 0.136908550418922
			elseif ping <= 100 then
				pred = 0.1353554
			elseif ping <= 120 then
				pred = 0.1516646
			elseif ping <= 150 then
				pred = 0.1680549
			elseif ping <= 180 then
				pred = 0.1680549
			elseif ping <= 200 then
				pred = 0.2017917
		    elseif ping <= 250 then
		        pred = 0.1985261
            elseif ping <= 280 then
		        pred = 0.1985261
		    elseif ping <= 300 then
		        pred = 0.2014461
			else
				pred = 0.1339287
			end

			getgenv().Zenith.Targetaim.Prediction = pred

			task.wait(1)
		end
	end)
end

local function stopAutoPrediction()
	autoPredictionRunning = false
end

getgenv().exlareCircle = getgenv().exlareCircle or {
	enabled = false,
	color = Color3.fromRGB(255, 255, 255),
	radius = 100,
	circle = nil
}

if not getgenv().exlareCircle.circle then
	getgenv().exlareCircle.circle = Drawing.new("Circle")
	getgenv().exlareCircle.circle.Filled = false
	getgenv().exlareCircle.circle.Thickness = 1
end

function updateexlareCircle()
	if getgenv().exlareCircle.circle then
		getgenv().exlareCircle.circle.Visible = getgenv().exlareCircle.enabled
		getgenv().exlareCircle.circle.Color = getgenv().exlareCircle.color
		getgenv().exlareCircle.circle.Radius = getgenv().exlareCircle.radius
		getgenv().exlareCircle.circle.Position = Vector2.new(
			workspace.CurrentCamera.ViewportSize.X / 2,
			workspace.CurrentCamera.ViewportSize.Y / 2
		)
	end
end

game:GetService("RunService").RenderStepped:Connect(function()
	if getgenv().exlareCircle.enabled and getgenv().exlareCircle.circle then
		getgenv().exlareCircle.circle.Position = Vector2.new(
			workspace.CurrentCamera.ViewportSize.X / 2,
			workspace.CurrentCamera.ViewportSize.Y / 2
		)
	end
end)

local old
old =
    hookfunction(
    Drawing.new,
    function(class, properties)
        local drawing = old(class)
        for i, v in next, properties or {} do
            drawing[i] = v
        end
        return drawing
    end
)

local function solve(angle, radius)
    return Vector2.new(math.sin(math.rad(angle)) * radius, math.cos(math.rad(angle)) * radius)
end

local last_render = 0
local drawings = {
    crosshair = {},
    text = {
        Drawing.new("Text", {Size = 13, Font = 2, Outline = true, Text = "Zenith", Color = Color3.new(1, 1, 1)}),
        Drawing.new("Text", {Size = 13, Font = 2, Outline = true, Text = " .lol", Color = Color3.new(0.5, 0.5, 0.5)})
    }
}

for idx = 1, 4 do
    drawings.crosshair[idx] = Drawing.new("Line")
    drawings.crosshair[idx + 4] = Drawing.new("Line")
end

local box = Drawing.new("Square")
box.Visible = false
box.Color = Color3.new(1, 1, 1)
box.Thickness = 1
box.Filled = false

local tracer = Drawing.new("Line")
tracer.Visible = false
tracer.Color = Color3.new(1, 1, 1)
tracer.Thickness = 1

getgenv().exlare = getgenv().exlare or {}
getgenv().exlare.esp = {
	box = false,
	tracer = false
}

RunService.RenderStepped:Connect(function()
	local target = getgenv().Zenith and getgenv().Zenith.Targetaim and getgenv().Zenith.Targetaim.target

	if target and target.Character and target.Character:FindFirstChild("HumanoidRootPart") and target.Character:FindFirstChild("Head") then
		local hrp = target.Character.HumanoidRootPart
		local head = target.Character.Head

		local hrpPos, hrpOnScreen = Camera:WorldToViewportPoint(hrp.Position)
		local headPos, headOnScreen = Camera:WorldToViewportPoint(head.Position)

		local screenHeight = math.abs(hrpPos.Y - headPos.Y) * 2
		local boxSize = Vector2.new(screenHeight / 1.5, screenHeight)

		if getgenv().exlare.esp.box and hrpOnScreen then
			box.Size = boxSize
			box.Position = Vector2.new(hrpPos.X - boxSize.X / 2, hrpPos.Y - boxSize.Y / 2)
			box.Visible = true
		else
			box.Visible = false
		end

		if getgenv().exlare.esp.tracer and hrpOnScreen then
			tracer.From = Vector2.new(Camera.ViewportSize.X / 2, Camera.ViewportSize.Y)
			tracer.To = Vector2.new(hrpPos.X, hrpPos.Y)
			tracer.Visible = true
		else
			tracer.Visible = false
		end
	else
		box.Visible = false
		tracer.Visible = false
	end
end)

getgenv().hit = {
    detection = true,
    logs = true,
    notify_duration = 1,
    sound_enabled = true,
    sound_id = "Neverlose",
    sound_volume = 1
}

local HitSoundId = {
    Bameware = "rbxassetid://3124331820",
    Neverlose = "rbxassetid://6534948092",
    Bell = "rbxassetid://6534947240",
    Bubble = "rbxassetid://6534947588",
    Pick = "rbxassetid://1347140027",
    Pop = "rbxassetid://198598793",
    Rust = "rbxassetid://1255040462",
    Sans = "rbxassetid://3188795283",
    Fart = "rbxassetid://130833677",
    Big = "rbxassetid://5332005053",
    Vine = "rbxassetid://5332680810",
    Bruh = "rbxassetid://4578740568",
    Skeet = "rbxassetid://5633695679",
    Fatality = "rbxassetid://6534947869",
    Bonk = "rbxassetid://5766898159",
    Minecraft = "rbxassetid://4018616850"
}

local hitSoundsNames = {"Bameware", "Neverlose", "Bubble", "Pick", "Pop", "Rust", "Sans", "Fart", "Big", "Vine", "Bruh", "Skeet", "Fatality", "Bonk","Minecraft"}

local last_health = {}

RunService.PostSimulation:Connect(function()
    local Zenith = getgenv().Zenith
    if not Zenith then return end

    local target = Zenith.Targetaim and Zenith.Targetaim.target
    local locking = Zenith.Camlock and Zenith.Camlock.enabled
    local humanoid = target and target.Character and target.Character:FindFirstChild("Humanoid")

    if locking and target and humanoid and hit.detection then
        local current_health = humanoid.Health

        if not last_health[target.UserId] then
            last_health[target.UserId] = current_health
        end

        if current_health < last_health[target.UserId] then
            if hit.sound_enabled and HitSoundId[hit.sound_id] then
                local sound = Instance.new("Sound")
                sound.SoundId = HitSoundId[hit.sound_id]
                sound.Volume = hit.sound_volume
                sound.Parent = workspace
                sound:Play()
                game:GetService("Debris"):AddItem(sound, 2)
            end

            if hit.logs and library then
                library:Notify("Hit Player" .. target.DisplayName, hit.notify_duration)
            end
        end

        last_health[target.UserId] = current_health
    end
end)

getgenv().orbit = {
	enabled = false,
	distance = 10,
	height = 5,
	speed = 400,
	angle = 0
}

game:GetService("RunService").Heartbeat:Connect(function(dt)
	if not getgenv().orbit.enabled then return end

	local lp = game.Players.LocalPlayer
	if not lp.Character or not lp.Character:FindFirstChild("HumanoidRootPart") then return end

	local target = getgenv().Zenith and getgenv().Zenith.Camlock and getgenv().Zenith.Camlock.target
	if not target or not target.Character or not target.Character:FindFirstChild("HumanoidRootPart") then return end

	local root = lp.Character.HumanoidRootPart
	local targetRoot = target.Character.HumanoidRootPart

	getgenv().orbit.angle += dt * getgenv().orbit.speed
	local angleRad = math.rad(getgenv().orbit.angle)

	local offset = Vector3.new(
		math.cos(angleRad) * getgenv().orbit.distance,
		getgenv().orbit.height,
		math.sin(angleRad) * getgenv().orbit.distance
	)

	local orbitPosition = targetRoot.Position + offset
	root.CFrame = CFrame.new(orbitPosition, targetRoot.Position)
end)

getgenv().Zenith.Visualize = getgenv().Zenith.Visualize or {enabled = false}

local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer

local highlight = Instance.new("Highlight")
highlight.FillColor = Color3.fromRGB(10, 10, 10)
highlight.OutlineColor = Color3.fromRGB(255, 255, 255)
highlight.FillTransparency = 0.4
highlight.OutlineTransparency = 0
highlight.Enabled = false
highlight.Parent = game:GetService("CoreGui")

local dot = Drawing.new("Circle")
dot.Color = Color3.fromRGB(250, 250, 250)
dot.Thickness = 2
dot.Filled = true
dot.Radius = 4
dot.Visible = false

RunService.RenderStepped:Connect(function()
    if not getgenv().Zenith.Visualize.enabled then
        highlight.Enabled = false
        dot.Visible = false
        return
    end

    local target = getgenv().Zenith.Targetaim and getgenv().Zenith.Targetaim.target
    if target and target.Character then
        local hrp = target.Character:FindFirstChild("HumanoidRootPart")

        highlight.Adornee = target.Character
        highlight.Enabled = true

        if hrp then
            local pos, onScreen = workspace.CurrentCamera:WorldToViewportPoint(hrp.Position)
            dot.Visible = onScreen
            if onScreen then
                dot.Position = Vector2.new(pos.X, pos.Y)
            end
        end
    else
        highlight.Enabled = false
        dot.Visible = false
    end
end)

getgenv().AntiAimViewer = {
    enabled = false,
}

local China = setmetatable({}, {
    __index = function(_, service)
        return game:GetService(service)
    end
})

local Players = China.Players
local ReplicatedStorage = China.ReplicatedStorage
local LocalPlayer = Players.LocalPlayer
local Mouse = LocalPlayer:GetMouse()
local MainEvent = ReplicatedStorage:FindFirstChild("MainEvent")

local function Bypass(Entity)
    Entity.ChildAdded:Connect(function(Child)
        if Child:IsA("Tool") then
            Child.Activated:Connect(function()
                if MainEvent then
                    MainEvent:FireServer("UpdateMousePos", Mouse.Hit.Position)
                end
            end)
        end
    end)
end

local function Alive(Player)
    return Player and Player.Character and Player.Character:FindFirstChild("Humanoid") and Player.Character:FindFirstChild("Head")
end

LocalPlayer.CharacterAdded:Connect(function(Character)
    Bypass(Character)
end)


if getgenv().AntiAimViewer then
    if Alive(LocalPlayer) then
        LocalPlayer.Character.Humanoid:UnequipTools()
        Bypass(LocalPlayer.Character)
    end
end


local Hook
Hook = hookmetamethod(game, "__namecall", function(self, ...)
    local Args = {...}
    local Method = getnamecallmethod()

    if not checkcaller() and Method == "FireServer" and self.Name == "MainEvent" and Args[1] == "UpdateMousePos" then
        if getgenv().AntiAimViewer then
            Args[2] = Mouse.Hit.Position
        end
        return self.FireServer(self, unpack(Args))
    end

    return Hook(self, ...)
end)

getgenv().EnemyStats = {
    Enabled = false,
}

local Players = game:GetService("Players")
local RunService = game:GetService("RunService")

local ScreenGui
local Frame, PFPImage, NameLabel, HealthFill

local function createGUI()
    if ScreenGui then return end

    ScreenGui = Instance.new("ScreenGui")
    ScreenGui.Parent = game.CoreGui

    Frame = Instance.new("Frame")
    Frame.Size = UDim2.new(0, 250, 0, 100)
    Frame.AnchorPoint = Vector2.new(0.5, 0.5)
    Frame.Position = UDim2.new(0.5, 0, 0.85, 0)
    Frame.BackgroundColor3 = Color3.fromRGB(20, 20, 20)
    Frame.BorderSizePixel = 2
    Frame.BorderColor3 = Color3.fromRGB(255, 255, 255)
    Frame.Parent = ScreenGui

    PFPImage = Instance.new("ImageLabel")
    PFPImage.Size = UDim2.new(0, 80, 0, 80)
    PFPImage.Position = UDim2.new(0, 10, 0, 10)
    PFPImage.BackgroundTransparency = 1
    PFPImage.Parent = Frame

    NameLabel = Instance.new("TextLabel")
    NameLabel.Size = UDim2.new(0, 140, 0, 30)
    NameLabel.Position = UDim2.new(0, 100, 0, 10)
    NameLabel.BackgroundTransparency = 1
    NameLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
    NameLabel.TextScaled = true
    NameLabel.Font = Enum.Font.GothamBold
    NameLabel.Text = ""
    NameLabel.Parent = Frame

    local HealthBack = Instance.new("Frame")
    HealthBack.Size = UDim2.new(0, 140, 0, 15)
    HealthBack.Position = UDim2.new(0, 100, 0, 50)
    HealthBack.BackgroundColor3 = Color3.fromRGB(60, 60, 60)
    HealthBack.BorderSizePixel = 1
    HealthBack.BorderColor3 = Color3.fromRGB(255, 255, 255)
    HealthBack.Parent = Frame

    HealthFill = Instance.new("Frame")
    HealthFill.Size = UDim2.new(1, 0, 1, 0)
    HealthFill.BackgroundColor3 = Color3.fromRGB(0, 255, 0)
    HealthFill.BorderSizePixel = 0
    HealthFill.Parent = HealthBack
end

local function destroyGUI()
    if ScreenGui then
        ScreenGui:Destroy()
        ScreenGui = nil
        Frame, PFPImage, NameLabel, HealthFill = nil
    end
end

RunService.RenderStepped:Connect(function()
    local camEnabled = getgenv().Zenith.Camlock.enabled
    local target = getgenv().Zenith.Targetaim.target

    if getgenv().EnemyStats.Enabled and camEnabled and target then
        if not ScreenGui then createGUI() end

        local player = target
        if player and player.UserId then
            local thumb, isReady = Players:GetUserThumbnailAsync(player.UserId, Enum.ThumbnailType.HeadShot, Enum.ThumbnailSize.Size420x420)
            if isReady then
                PFPImage.Image = thumb
            end
            NameLabel.Text = player.DisplayName or player.Name
        end

        local char = player.Character
        local humanoid = char and char:FindFirstChildOfClass("Humanoid")
        if humanoid and humanoid.MaxHealth > 0 then
            local hpPercent = humanoid.Health / humanoid.MaxHealth
            HealthFill.Size = UDim2.new(math.clamp(hpPercent, 0, 1), 0, 1, 0)
            HealthFill.BackgroundColor3 = Color3.fromRGB(255 - (hpPercent * 255), hpPercent * 255, 0)
        end
    else
        destroyGUI()
    end
end)

getgenv().GroundShotDetection = {
    Enabled = false,
    GroundShotThreshold = 0.5,
    DetectionRange = 20
}

local Players = game:GetService("Players")
local localPlayer = Players.LocalPlayer
local character = localPlayer.Character or localPlayer.CharacterAdded:Wait()
local humanoid = character:WaitForChild("Humanoid")

local function isGroundShot(hitPosition)
    local rootPart = character:FindFirstChild("HumanoidRootPart")
    if not rootPart then return false end

    local feetPosition = rootPart.Position - Vector3.new(0, humanoid.HipHeight, 0)
    local distanceToFeet = (hitPosition - feetPosition).Magnitude
    return distanceToFeet <= getgenv().GroundShotDetection.GroundShotThreshold
end

local function onCharacterAdded(newCharacter)
    character = newCharacter
    humanoid = character:WaitForChild("Humanoid")
end

localPlayer.CharacterAdded:Connect(onCharacterAdded)

workspace:GetPropertyChangedSignal("CurrentCamera"):Connect(function()
    workspace.CurrentCamera.ChildAdded:Connect(function(child)
        if getgenv().GroundShotDetection.Enabled then
            if child:IsA("BasePart") and child.Name == "Bullet" then
                local rootPart = character:FindFirstChild("HumanoidRootPart")
                if rootPart and (child.Position - rootPart.Position).Magnitude <= getgenv().GroundShotDetection.DetectionRange then
                    if isGroundShot(child.Position) then
                    end
                end
            end
        end
    end)
end)

getgenv().charactermod = {
    enabled = true,
    speed = 16,
    jump = 50,
    fov = 70,
    _dev = {},
}

local function storeDevDefaults()
    local char = game.Players.LocalPlayer.Character
    if char and char:FindFirstChildOfClass("Humanoid") then
        local hum = char:FindFirstChildOfClass("Humanoid")
        getgenv().charactermod._dev.WalkSpeed = hum.WalkSpeed
        getgenv().charactermod._dev.JumpPower = hum.JumpPower
    end
end

game.Players.LocalPlayer.CharacterAdded:Connect(function()
    task.wait(0.5)
    storeDevDefaults()
end)

RunService.Heartbeat:Connect(function()
    local char = game.Players.LocalPlayer.Character
    if char and char:FindFirstChildOfClass("Humanoid") then
        local hum = char:FindFirstChildOfClass("Humanoid")

        if getgenv().charactermod.enabled then
            hum.WalkSpeed = getgenv().charactermod.speed
            hum.JumpPower = getgenv().charactermod.jump
        elseif getgenv().charactermod._dev.WalkSpeed then
            hum.WalkSpeed = getgenv().charactermod._dev.WalkSpeed
            hum.JumpPower = getgenv().charactermod._dev.JumpPower
        end
    end
end)

local main = tabs.combat:AddLeftGroupbox('Main Settings')
local air = tabs.combat:AddRightGroupbox('Air Settings')
local ag = tabs.combat:AddRightGroupbox('Anti ground shots')
local speed = tabs.combat:AddRightGroupbox('CFrame')
local hit_group = tabs.visuals:AddLeftGroupbox('Hit Sounds')
local circleBox = tabs.visuals:AddLeftGroupbox('Visuals')
local buy = tabs.visuals:AddRightGroupbox('Teleport Item')
local hvh = tabs.raging:AddLeftGroupbox('HVH Orbit')
local ant = tabs.visuals:AddRightGroupbox('Antilocks')
local char = tabs.visuals:AddRightGroupbox('Character Settings')
local crd = tabs.credit:AddLeftGroupbox('Credits')
local chng = tabs.credit:AddRightGroupbox('Changelogs')
local at = tabs.raging:AddRightGroupbox('Autos')

getgenv().AutoReloadEnabled = false

local function autoReload()
    while getgenv().AutoReloadEnabled do
        task.wait(0.1)

        local character = game.Players.LocalPlayer.Character
        if character then
            local tool = character:FindFirstChildWhichIsA("Tool")
            if tool then
                local ammo = tool:FindFirstChild("AMMO")
                local reloadEvent = tool:FindFirstChildWhichIsA("RemoteEvent")
                
                if ammo and reloadEvent and ammo.Value == 0 then
                    reloadEvent:FireServer()
                    task.wait(1)
                end
            end
        end
    end
end

at:AddToggle('autoReloadToggle', {
    Text = 'Enable auto reload',
    Default = false,
    Callback = function(state)
        getgenv().AutoReloadEnabled = state
        if state then
            task.spawn(autoReload)
        end
    end
})

at:AddButton(
    'Auto Shoot',
    function()
        local ScreenGui = Instance.new("ScreenGui")
        ScreenGui.Parent = game.CoreGui

        local button = Instance.new("TextButton")
        button.Size = UDim2.new(0, 80, 0, 60)
        button.Position = UDim2.new(0.5, -100, 0.5, -25)
        button.Text = "Auto Shoot"
        button.BackgroundColor3 = Color3.new(0, 0, 0)
        button.BackgroundTransparency = 0.3
        button.TextColor3 = Color3.new(1, 1, 1)
        button.Font = Enum.Font.Code
        button.TextWrapped = true
        button.TextScaled = true
        button.Parent = ScreenGui
        button.Draggable = true
        button.Active = true
        button.Selectable = true
        
        local Outline = Instance.new("UIStroke")
        Outline.Color = Color3.fromRGB(250, 250, 250)
        Outline.Thickness = 1
        Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
        Outline.Parent = button

        local UICorner = Instance.new("UICorner")
        UICorner.Parent = button

        local autoShooting = false

        local function autoShoot()
            while autoShooting do
                local character = game.Players.LocalPlayer.Character
                if character then
                    local tool = character:FindFirstChildOfClass("Tool")
                    if tool and tool:FindFirstChild("Handle") then
                        tool:Activate()
                    end
                end
                task.wait()
            end
        end

        button.MouseButton1Click:Connect(
            function()
                autoShooting = not autoShooting
                button.Text = autoShooting and "Auto On" or "Auto Off"

                if autoShooting then
                    task.spawn(autoShoot)
                end
            end
        )
    end
)

getgenv().antilock = {
    enabled = false,
    mode = "Sky" -- or predbreaker
}

local Players = game:GetService("Players")
local RunService = game:GetService("RunService")

RunService.Heartbeat:Connect(function()
    local player = Players.LocalPlayer
    local character = player.Character

    if character and character:FindFirstChild("HumanoidRootPart") then
        local humanoidRootPart = character.HumanoidRootPart
        local vel = humanoidRootPart.Velocity

       
        if getgenv().antilock.enabled then
            if getgenv().antilock.mode == "Predbreaker" then
                humanoidRootPart.Velocity = Vector3.new(0, 0, 0)
            elseif getgenv().antilock.mode == "Sky" then
                humanoidRootPart.Velocity = Vector3.new(0, 100, 0)
            end
        end

        RunService.RenderStepped:Wait()
        humanoidRootPart.Velocity = vel
    end
end)

ant:AddToggle(
    'Toggle antilock',
    {
        Text = 'Enable Anti Lock',
        Default = false,
        Tooltip = 'Toggle Anti Lock system',
        Callback = function(state)
            getgenv().antilock.enabled = state
        end
    }
)

ant:AddDropdown(
    'Antilockmode',
    {
        Values = {'Sky', 'Predbreaker'},
        Default = getgenv().antilock.mode,
        Multi = false,
        Text = 'Anti Lock Mode',
        Tooltip = 'Select Anti Lock mode',
        Callback = function(value)
            getgenv().antilock.mode = value
        end
    }
)

char:AddToggle('mod_toggle', {
    Text = 'Enable Mods',
    Default = getgenv().charactermod.enabled,
    Callback = function(state)
        local char = game.Players.LocalPlayer.Character
        local hum = char and char:FindFirstChildOfClass("Humanoid")

        if hum then
            if state then
                getgenv().charactermod._dev.WalkSpeed = hum.WalkSpeed
                getgenv().charactermod._dev.JumpPower = hum.JumpPower
            else
                hum.WalkSpeed = getgenv().charactermod._dev.WalkSpeed or hum.WalkSpeed
                hum.JumpPower = getgenv().charactermod._dev.JumpPower or hum.JumpPower
            end
        end
        
        getgenv().charactermod.enabled = state
    end
})

char:AddSlider('mod_speed', {
    Text = 'Walk Speed',
    Default = getgenv().charactermod.speed,
    Min = 26,
    Max = 200, 
    Rounding = 0,
    Callback = function(val)
        getgenv().charactermod.speed = val
    end
})

char:AddSlider('mod_jump', {
    Text = 'Jump Power',
    Default = getgenv().charactermod.jump,
    Min = 50,
    Max = 200,
    Rounding = 0,
    Callback = function(val)
        getgenv().charactermod.jump = val
    end
})

char:AddSlider('mod_fov', {
    Text = 'Field of View',
    Default = workspace.CurrentCamera.FieldOfView,
    Min = 70,
    Max = 120,
    Rounding = 0,
    Callback = function(val)
        workspace.CurrentCamera.FieldOfView = val
    end
})

hvh:AddToggle('orbit', {
   Text =  'Enable Orbit',
   Default = getgenv().orbit.enabled,
   Callback = function(value) getgenv().orbit.enabled = value end
})

hvh:AddInput('ortbitz', {
   Text = 'Orbit Speed',
   Default = getgenv().orbit.speed,
   Callback = function(value) getgenv().orbit.speed = tonumber(value) or 400 end
})

hvh:AddInput('orbitz', {
   Text = 'Orbit Height',
   Default = getgenv().orbit.height,
   Callback = function(value) getgenv().orbit.height = tonumber(value) or 5 end
})

hvh:AddInput('oree', {
   Text = 'Orbit Distance',
   Default = getgenv().orbit.distance,
   Callback = function(value) getgenv().orbit.distance = tonumber(value) or 10 end
})

main:AddToggle('enable', {
    Text = 'Enable TargetAim',
    Default = getgenv().Zenith.Targetaim.enabled,
    Callback = function(state)
    getgenv().Zenith.Targetaim.enabled = state
    if state and not getgenv().Zenith.Targetaim.target then
        local enemy = FindNearestEnemy()
        if enemy then
            getgenv().Zenith.Targetaim.target = enemy
        end
    end
end
})

main:AddToggle('enable_cam', {
    Text = 'Enable Camlock',
    Default = getgenv().Zenith.Camlock.enabled,
    Callback = function(state)
        getgenv().Zenith.Camlock.enabled = state
        if state and not getgenv().Zenith.Camlock.target then
            local enemy = FindNearestEnemy()
            if enemy then
                getgenv().Zenith.Camlock.target = enemy
            end
        end
    end
})

main:AddToggle("visualize_enemy", {
    Text = "Visualize Enemy",
    Default = getgenv().Zenith.Visualize.enabled,
    Callback = function(val)
        getgenv().Zenith.Visualize.enabled = val
    end
})

main:AddToggle("stats_enemy", {
    Text = "Enemy Stats",
    Default = getgenv().EnemyStats.Enabled,
    Callback = function(val)
        getgenv().EnemyStats.Enabled = val
    end
})

main:AddToggle('enable_aav', {
    Text = 'Enable Anti AimViewer',
    Default = false,
    Callback = function(value) getgenv().AntiAimViewer = value end
})

main:AddToggle("AutoPrediction", {
	Text = "Auto Prediction",
	Default = false,
	Callback = function(state)
		if state then
			startAutoPrediction()
		else
			stopAutoPrediction()
		end
	end
})

main:AddToggle('resolver', {
    Text = 'Resolver V1',
    Default = Zenith.Camlock.resolver,
    Callback = function(value) Zenith.Camlock.resolver = value end
})

main:AddDropdown('method', {
    Text = 'Hook Method',
    Values = {'Namecall', 'Index'},
    Default = getgenv().Zenith.Targetaim.Method,
    Callback = function(value)
         getgenv().Zenith.Targetaim.Method = value:lower()
    end
})

main:AddDropdown('hitpart', {
    Text = 'Hit Part',
    Values = {'HumanoidRootPart', 'UpperTorso', 'LowerTorso', 'Head'},
    Default = getgenv().Zenith.Targetaim.HitPart,
    Callback = function(value)
        getgenv().Zenith.Targetaim.HitPart = value
        getgenv().Zenith.Camlock.HitPart = value
    end
})

main:AddInput('Prediction', {
    Text = 'Prediction',
    Default = getgenv().Zenith.Targetaim.Prediction,
    Callback = function(val)
        local num = tonumber(val) or 0.1
        getgenv().Zenith.Targetaim.Prediction = num
        getgenv().Zenith.Camlock.Prediction = num
    end
})

main:AddInput('smoothness', {
    Text = 'Smoothness',
    Default = getgenv().Zenith.Settings.Smoothness,
    Callback = function(val)
        getgenv().Zenith.Settings.Smoothness = tonumber(val) or 0.1
    end
})

circleBox:AddToggle("circle_enabled", {
	Text = "Enable FOV",
	Default = getgenv().exlareCircle.enabled,
	Callback = function(state)
		getgenv().exlareCircle.enabled = state
		updateexlareCircle()
	end
})

circleBox:AddInput("circle_radius", {
	Text = "FOV Radius",
	Default = tostring(getgenv().exlareCircle.radius),
	Numeric = true,
	Finished = true,
	Callback = function(val)
		local number = tonumber(val)
		if number then
			getgenv().exlareCircle.radius = number
			updateexlareCircle()
		end
	end
})

circleBox:AddToggle("crosshair_enabled", {
	Text = "Enable Crosshair",
	Default = getgenv().crosshair.enabled,
	Callback = function(state)
		getgenv().crosshair.enabled = state
	end
})

circleBox:AddDropdown('Crosshair_Type', {
    Values = {'Center', 'Mouse'},
    Default = 'Center',
    Text = 'Crosshair Mode',
    Callback = function(value)
        getgenv().crosshair.mode = value:lower()
    end
})

circleBox:AddInput("crosshair_radius", {
	Text = "Crosshair Radius",
	Default = tostring(getgenv().crosshair.radius),
	Numeric = true,
	Finished = true,
	Callback = function(val)
		local num = tonumber(val)
		if num then
			getgenv().crosshair.radius = num
		end
	end
})

circleBox:AddToggle("esp_box", {
	Text = "Target Box",
	Default = getgenv().exlare.esp.box,
	Callback = function(state)
		getgenv().exlare.esp.box = state
	end
})

circleBox:AddToggle("esp_tracer", {
	Text = "Target Tracer",
	Default = getgenv().exlare.esp.tracer,
	Callback = function(state)
		getgenv().exlare.esp.tracer = state
	end
})

hit_group:AddToggle('detection', {
    Text = 'Hit Detection',
    Default = hit.detection,
    Callback = function(value) hit.detection = value end
})

hit_group:AddToggle('logs', {
    Text = 'Hit Logs',
    Default = hit.logs,
    Callback = function(value) hit.logs = value end
})

hit_group:AddToggle('sound_enabled', {
    Text = 'Hit Sound',
    Default = hit.sound_enabled,
    Callback = function(value) hit.sound_enabled = value end
})

hit_group:AddInput('notify_duration', {
    Default = hit.notify_duration,
    Text = 'Notify Duration',
    Numeric = true,
    Finished = true,
    Callback = function(value)
        hit.notify_duration = tonumber(value) or 1
    end
})

hit_group:AddDropdown('sounds', {
    Values = hitSoundsNames,
    Default = hit.sound_id,
    Text = 'Hit Sound',
    Callback = function(value)
        hit.sound_id = value
    end
})

hit_group:AddInput('sound_volume', {
    Default = hit.sound_volume,
    Text = 'Sound Volume',
    Numeric = true,
    Finished = true,
    Callback = function(value)
        hit.sound_volume = tonumber(value) or 1
    end
})

buy:AddButton('High-Medium Armor', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[High-Medium Armor]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('LMG', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[LMG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Double-Barrel', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Double-Barrel SG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Tactical Shotgun', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[TacticalShotgun]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Revolver', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Revolver]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('RPG', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[RPG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Pizza', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Pizza]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Mask', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Surgeon Mask]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

local Players = game:GetService("Players")
local player = Players.LocalPlayer
local displayName = player.DisplayName

local function getGreeting()
    local hour = os.date("*t").hour
    if hour < 12 then
        return "Good Morning"
    elseif hour < 18 then
        return "Good Afternoon"
    else
        return "Good Evening"
    end
end

local function startGreetingUpdater(label)
    task.spawn(function()
        while true do
            label:SetText(getGreeting() .. ", " .. displayName .. "!")
            task.wait(30) -- check every 30 seconds
        end
    end)
end

local greetingLabel = main:AddLabel("...") -- placeholder
startGreetingUpdater(greetingLabel)

air:AddToggle('enabled', {
    Text = 'Auto Air',
    Default = Zenith.AutoAir.enabled,
    Callback = function(value) Zenith.AutoAir.enabled = value end
})

air:AddInput('Offset', {
    Default = Zenith.AutoAir.jumpOffset,
    Text = 'jump offset',
    Callback = function(value) Zenith.AutoAir.jumpOffset = tonumber(value) or 0.8 end
})

air:AddInput('dly', {
    Default = Zenith.AutoAir.delay,
    Text = 'Delay',
    Callback = function(value) Zenith.AutoAir.delay = tonumber(value) or 0.1 end
})

air:AddDropdown('airpary', {
    Values = {'RightFoot', 'LowerTorso', 'HumanoidRootPart', 'Head', 'UpperTorso'},
    Default = Zenith.AutoAir.AirPart,
    Text = 'Auto Air Part',
    Callback = function(value) Zenith.AutoAir.AirPart = value end
})

ag:AddToggle('gsEnabled', {
    Text = 'enable',
    Default = getgenv().GroundShotDetection.Enabled,
    Callback = function(value)
        getgenv().GroundShotDetection.Enabled = value
    end
})

ag:AddInput('gsThreshold', {
    Default = '0.5',
    Numeric = true,
    Finished = true,
    Text = 'threshold',
    Callback = function(value)
        getgenv().GroundShotDetection.GroundShotThreshold = tonumber(value) or 5
    end
})

ag:AddInput('gsRange', {
    Default = '20',
    Numeric = true,
    Finished = true,
    Text = 'range',
    Callback = function(value)
        getgenv().GroundShotDetection.DetectionRange = tonumber(value) or 20
    end
})

speed:AddToggle('enablecf', {
    Text = 'Enable CFrame',
    Default = getgenv().cframe.settings.enabled,
    Callback = function(value) getgenv().cframe.settings.enabled = value end
})

speed:AddToggle('enableshow', {
    Text = 'Enable Showbutton',
    Default = getgenv().cframe.settings.showbutton,
    Callback = function(value) getgenv().cframe.settings.showbutton = value end
})

speed:AddSlider('cframe_speed', {
    Text = 'CFrame Speed',
    Default = getgenv().cframe.settings.speed or 1,
    Min = 1,
    Max = 10,
    Rounding = 1,
    Compact = false,
    Callback = function(value)
        getgenv().cframe.settings.speed = value
    end
})

runservice.RenderStepped:Connect(
    function()
        local _tick = tick()

        if _tick - last_render > crosshair.refreshrate then
            last_render = _tick

            local position =
                (crosshair.mode == "center" and camera.ViewportSize / 2 or
                crosshair.mode == "mouse" and inputservice:GetMouseLocation() or
                crosshair.position)

            local text_1 = drawings.text[1]
            local text_2 = drawings.text[2]

            text_1.Visible = crosshair.enabled
            text_2.Visible = crosshair.enabled

            if crosshair.enabled then
                local text_x = text_1.TextBounds.X + text_2.TextBounds.X

                text_1.Position =
                    position +
                    Vector2.new(
                        -text_x / 2,
                        crosshair.radius + (crosshair.resize and crosshair.resize_max or crosshair.length) + 15
                    )
                text_2.Position = text_1.Position + Vector2.new(text_1.TextBounds.X)
                text_2.Color = crosshair.color

                for idx = 1, 4 do
                    local outline = drawings.crosshair[idx]
                    local inline = drawings.crosshair[idx + 4]

                    local angle = (idx - 1) * 90
                    local length = crosshair.length

                    if crosshair.spin then
                        local spin_angle = -_tick * crosshair.spin_speed % crosshair.spin_max
                        angle =
                            angle +
                            tweenservice:GetValue(spin_angle / 360, crosshair.spin_style, Enum.EasingDirection.InOut) *
                                360
                    end

                    if crosshair.resize then
                        local resize_length = tick() * crosshair.resize_speed % 180
                        length = crosshair.resize_min + math.sin(math.rad(resize_length)) * crosshair.resize_max
                    end

                    inline.Visible = true
                    inline.Color = crosshair.color
                    inline.From = position + solve(angle, crosshair.radius)
                    inline.To = position + solve(angle, crosshair.radius + length)
                    inline.Thickness = crosshair.width

                    outline.Visible = true
                    outline.From = position + solve(angle, crosshair.radius - 1)
                    outline.To = position + solve(angle, crosshair.radius + length + 1)
                    outline.Thickness = crosshair.width + 1.5
                end
            else
                for idx = 1, 4 do
                    drawings.crosshair[idx].Visible = false
                    drawings.crosshair[idx + 4].Visible = false
                end
            end
        end
    end
)

crd:AddLabel('+ Ghxt: Code')

crd:AddLabel('+ Hex: Code')

crd:AddLabel('+ Soul: Owner')

crd:Addlabel('+ That: Logo Maker's)

library:Notify("Sydie.lol on top", 4)

savemanager:SetLibrary(library)
thememanager:SetLibrary(library)
thememanager:SetFolder('sydie')
savemanager:SetFolder('sydiecfg')
thememanager:ApplyToTab(tabs.config)
savemanager:BuildConfigSection(tabs.config)

library:Notify("Sydie loaded successfully", 5)

game.StarterGui:SetCore("SendNotification", {
    Title = "Sydie",
    Text = "Sydie.lol successfully loaded",
    Duration = 3
})
